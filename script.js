// ===== VARIÁVEIS E ARRAYS =====
// Array de objetos com os jogos da loja
const produtos = [
  { id: 1, nome: "Minecraft", preco: 99.9, imagem: "img/minecraft.jpg" },
  { id: 2, nome: "GTA V", preco: 59.9, imagem: "img/gtav.jpg" },
  { id: 3, nome: "The Witcher 3", preco: 49.9, imagem: "img/witcher3.jpg" },
  { id: 4, nome: "God of War", preco: 129.9, imagem: "img/godofwar.jpg" },
  { id: 5, nome: "Red Dead Redemption 2", preco: 109.9, imagem: "img/rdr2.jpg" },
  { id: 6, nome: "EA Sports FC 26", preco: 189.9, imagem: "img/fc26.jpg" }
];

let carrinho = [];            // array com os itens adicionados
let descontoPercentual = 0;   // número (ex.: 10 = 10%)
let cupomAplicado = "";       // string

// Lista de cupons válidos (objeto)
const cupons = {
  GAMER10: 10,
  PLAYER20: 20
};

// ===== DOM: pegando elementos da página =====
const listaProdutos = document.getElementById("lista-produtos");
const listaCarrinho = document.getElementById("itens-carrinho");
const spanContador = document.getElementById("contador");
const spanSubtotal = document.getElementById("subtotal");
const spanDesconto = document.getElementById("desconto");
const spanTotal = document.getElementById("total");
const msgCupom = document.getElementById("msg-cupom");

// ===== FUNÇÕES =====
function formatar(valor) {
  return "R$ " + valor.toFixed(2).replace(".", ",");
}

// Estrutura de repetição: cria um card para cada produto
function mostrarProdutos() {
  for (let i = 0; i < produtos.length; i++) {
    const p = produtos[i];
    const card = document.createElement("div");
    card.className = "produto";
    card.innerHTML =
      '<img src="' + p.imagem + '" alt="' + p.nome + '">' +
      "<h3>" + p.nome + "</h3>" +
      '<p class="preco">' + formatar(p.preco) + "</p>" +
      '<button class="botao" data-id="' + p.id + '">Adicionar</button>';
    listaProdutos.appendChild(card);
  }
}

function adicionarAoCarrinho(id) {
  // Estrutura condicional: se o item já existe, só aumenta a quantidade
  let item = carrinho.find(function (i) { return i.id === id; });
  if (item) {
    item.qtd++;
  } else {
    const produto = produtos.find(function (p) { return p.id === id; });
    carrinho.push({ id: produto.id, nome: produto.nome, preco: produto.preco, qtd: 1 });
  }
  atualizarCarrinho();
}

function mudarQuantidade(id, valor) {
  const item = carrinho.find(function (i) { return i.id === id; });
  item.qtd = item.qtd + valor;           // operação matemática
  if (item.qtd <= 0) {                   // operação lógica/condicional
    carrinho = carrinho.filter(function (i) { return i.id !== id; });
  }
  atualizarCarrinho();
}

function atualizarCarrinho() {
  listaCarrinho.innerHTML = "";
  let subtotal = 0;
  let totalItens = 0;

  if (carrinho.length === 0) {
    listaCarrinho.innerHTML = "<li>Seu carrinho está vazio.</li>";
  }

  for (let i = 0; i < carrinho.length; i++) {
    const item = carrinho[i];
    subtotal += item.preco * item.qtd;
    totalItens += item.qtd;

    const li = document.createElement("li");
    li.innerHTML =
      item.nome + " - " + formatar(item.preco) + " x " + item.qtd +
      ' <button data-acao="menos" data-id="' + item.id + '">-</button>' +
      ' <button data-acao="mais" data-id="' + item.id + '">+</button>';
    listaCarrinho.appendChild(li);
  }

  const desconto = subtotal * (descontoPercentual / 100);
  const total = subtotal - desconto;

  spanContador.textContent = totalItens;
  spanSubtotal.textContent = formatar(subtotal);
  spanDesconto.textContent = "- " + formatar(desconto);
  spanTotal.textContent = formatar(total);
}

function aplicarCupom(texto) {
  const codigo = texto.trim().toUpperCase();

  if (codigo === "") {
    msgCupom.textContent = "Digite um cupom.";
    msgCupom.className = "erro";
  } else if (codigo === cupomAplicado) {
    msgCupom.textContent = "Esse cupom já foi aplicado.";
    msgCupom.className = "erro";
  } else if (cupons[codigo]) {
    descontoPercentual = cupons[codigo];
    cupomAplicado = codigo;
    msgCupom.textContent = "Cupom aplicado: " + descontoPercentual + "% de desconto!";
    msgCupom.className = "ok";
  } else {
    msgCupom.textContent = "Cupom inválido.";
    msgCupom.className = "erro";
  }
  atualizarCarrinho();
}

function finalizarCompra() {
  if (carrinho.length === 0) {
    alert("Adicione pelo menos um produto ao carrinho.");
    return;
  }
  alert("Compra finalizada! Total: " + spanTotal.textContent + "\nObrigado por comprar na Game Zone!");
  carrinho = [];
  descontoPercentual = 0;
  cupomAplicado = "";
  msgCupom.textContent = "";
  document.getElementById("cupom").value = "";
  atualizarCarrinho();
}

// ===== EVENTOS =====
// Clique nos botões "Adicionar" dos produtos
listaProdutos.addEventListener("click", function (e) {
  if (e.target.dataset.id) {
    adicionarAoCarrinho(Number(e.target.dataset.id));
  }
});

// Clique nos botões + e - do carrinho
listaCarrinho.addEventListener("click", function (e) {
  const acao = e.target.dataset.acao;
  const id = Number(e.target.dataset.id);
  if (acao === "mais") { mudarQuantidade(id, 1); }
  if (acao === "menos") { mudarQuantidade(id, -1); }
});

// Formulário do cupom
document.getElementById("form-cupom").addEventListener("submit", function (e) {
  e.preventDefault();
  aplicarCupom(document.getElementById("cupom").value);
});

// Botão de compra
document.getElementById("btn-comprar").addEventListener("click", finalizarCompra);

// Formulário de contato
document.getElementById("form-contato").addEventListener("submit", function (e) {
  e.preventDefault();
  alert("Mensagem enviada! Obrigado, " + document.getElementById("nome").value + ".");
  this.reset();
});

// ===== INÍCIO =====
mostrarProdutos();
atualizarCarrinho();