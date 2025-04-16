algoritmo "MovieflixCatalog"
var
    type, raiting, genre, provider: inteiro
    // [TYPE]       => (1 filme, 2 série, 3 documentário)
    // [RAITING]    => (0 livre, 10 10+, 18 18+)
    // [GENRE]      => (1 ação, 2 comédia, 3 drama, 4 suspense)
    // [PROVIDER]   => (1 Netflix, 2 Amazon Prime, 3 Disney+, 4 HBO Max)

procedimento renderMoviesTable()
inicio
    escreval("\n +----------------------------------------------------+-------------------+---------+-----------+------------------+")
    escreval("<| Título                                             | Tipo              | Censura | Categoria | Fornecedor       |>")
    escreval(" +----------------------------------------------------+-------------------+---------+-----------+------------------+")
    escreval("<| Vingadores: Ultimato                               | 1                | 18      | 1         | 1 (Netflix)      |>")
    escreval("<| O Rei Leão                                         | 1                | 0       | 1         | 3 (Disney+)      |>")
    escreval("<| Breaking Bad                                       | 2                | 18      | 2         | 1 (Netflix)      |>")
    escreval("<| Friends                                            | 2                | 10      | 2         | 2 (Amazon Prime) |>")
    escreval("<| Stranger Things                                    | 2                | 10      | 1         | 1 (Netflix)      |>")
    escreval("<| Titanic                                            | 1                | 10      | 3         | 2 (Amazon Prime) |>")
    escreval("<| Chernobyl                                          | 2                | 18      | 4         | 4 (HBO Max)      |>")
    escreval("<| La Casa de Papel                                   | 2                | 18      | 1         | 1 (Netflix)      |>")
    escreval("<| O Menino que Descobriu o Vento                     | 1                | 0       | 3         | 3 (Disney+)      |>")
    escreval("<| Dark                                               | 2                | 18      | 1         | 1 (Netflix)      |>")
    escreval(" +----------------------------------------------------+-------------------+---------+-----------+------------------+\n\n")
    escreval(" ## Bem-vindo à escolha de Filmes e Séries!\n\n")
fimprocedimento

procedimento validationError(expectedValues: caractere)
inicio
    escreval("[VALIDATION ERROR]")
    escreval("Ops! Valor inválido")
    escreval("[VALID VALUES] <", expectedValues, ">")
fimprocedimento

procedimento availabilityError()
inicio
    escreval("[AVAILABILITY ERROR]")
    escreval("Ops! Nenhuma opção disponível")
    escreval("[NEXT CATALOG] 20/02/2002 - 20:02:20")
fimprocedimento

funcao renderType(): inteiro
var type: inteiro
inicio
    escreval(" +-----------------------------------------------------------------------+\n")
    escreval("<| Tipo de título (1 - Filme, 2 - Série, 3 - Documentário):              |>\n")
    escreval(" +-----------------------------------------------------------------------+\n")
    leia(type)
    se (type <> 1) e (type <> 2) e (type <> 3) entao
        validationError("1, 2, 3")
        type <- renderType()
    fimse
    retorne type
fimfuncao

funcao renderRating(): inteiro
var rating: inteiro
inicio
    escreval("\n\n +-----------------------------------------------------------------------+\n")
    escreval("<| Censura (0 - Livre, 10 - 10 anos ou mais, 18 - 18 anos ou mais):      |>\n")
    escreval(" +-----------------------------------------------------------------------+\n")
    leia(rating)
    se (rating <> 0) e (rating <> 10) e (rating <> 18) entao
        validationError("0, 10, 18")
        rating <- renderRating()
    fimse
    retorne rating
fimfuncao

funcao renderGenre(): inteiro
var genre: inteiro
inicio
    escreval("\n\n +-----------------------------------------------------------------------+\n")
    escreval("<| Categoria (1 - Ação, 2 - Comédia, 3 - Drama, 4 - Suspense):           |>\n")
    escreval(" +-----------------------------------------------------------------------+\n")
    leia(genre)
    se (genre < 1) ou (genre > 4) entao
        validationError("1, 2, 3, 4")
        genre <- renderGenre()
    fimse
    retorne genre
fimfuncao

funcao renderProvider(): inteiro
var provider: inteiro
inicio
    escreval("\n\n +-----------------------------------------------------------------------+\n")
    escreval("<| Fornecedor (1 - Netflix, 2 - Amazon Prime, 3 - Disney+, 4 - HBO Max): |>\n")
    escreval(" +-----------------------------------------------------------------------+\n")
    leia(provider)
    se (provider < 1) ou (provider > 4) entao
        validationError("1, 2, 3, 4")
        provider <- renderProvider()
    fimse
    retorne provider
fimfuncao

procedimento renderResponseTable(typeStr, genreStr, providerStr, title: caractere; raiting: inteiro)
inicio
    escreval(" +-----------------------------------------------------------------------+")
    escreval("<| Título: ", title)
    escreval("<| Tipo: ", typeStr)
    escreval("<| Classificação: ", raiting)
    escreval("<| Gênero: ", genreStr)
    escreval("<| Fornecedor: ", providerStr)
    escreval(" +-----------------------------------------------------------------------+")
fimprocedimento

procedimento renderResponse(type, raiting, genre, provider: inteiro)
inicio
    se type = 1 entao
        se genre = 1 entao
            se (provider = 1 e raiting) = 18 entao
                renderResponseTable("Filme", "Ação", "Netflix", "Vingadores: Ultimato", 18)
            senao
                se (provider = 3 e raiting = 0) entao
                    renderResponseTable("Filme", "Ação", "Disney+", "O Rei Leão", 0)
                senao
                    availabilityError()
                fimse
            fimse
        senao
            se genre = 3 entao
                se (provider = 2 e (raiting = 10 ou raiting = 18)) entao
                    renderResponseTable("Filme", "Drama", "Amazon Prime", "Titanic", 10)
                senao
                    se (provider = 3 e raiting = 0) entao
                        renderResponseTable("Filme", "Drama", "Disney+", "O Menino que Descobriu o Vento", 0)
                    senao
                        availabilityError()
                    fimse
                fimse
            senao
                availabilityError()
            fimse
        fimse
    senao
        se type = 2 entao
            se genre = 1 entao
                se provider = 1 entao
                    se raiting = 18 entao
                        renderResponseTable("Série", 10, "Ação", "Netflix", "Stranger Things");
                        renderResponseTable("Série", 18, "Ação", "Netflix", "La Casa de Papel");
                        renderResponseTable("Série", 18, "Ação", "Netflix", "Dark");
                    senao
                        se raiting = 10 entao
                            renderResponseTable("Série", 10, "Ação", "Netflix", "Stranger Things");
                        senao
                            availabilityError();
                        fimse
                    fimse
                senao
                    availabilityError();
                fimse
            senao
                se genre = 2 entao
                    se (provider = 1 e raiting = 18) entao
                        renderResponseTable("Série", "Comédia", "Netflix", "Breaking Bad", 18)
                    senao
                        se (provider = 2 e (raiting = 10 ou raiting = 18)) entao
                            renderResponseTable("Série", "Comédia", "Amazon Prime", "Friends", 10)
                        senao
                            availabilityError()
                        fimse
                    fimse
                senao
                    se (genre = 4 e provider = 4 e raiting = 18) entao
                        renderResponseTable("Série", "Suspense", "HBO Max", "Chernobyl", 18)
                    senao
                        availabilityError()
                    fimse
                fimse
            fimse
        senao
            availabilityError()
        fimse
    fimse
fimprocedimento

inicio
    renderMoviesTable()

    type <- renderType()
    raiting <- renderRating()
    genre <- renderGenre()
    provider <- renderProvider()

    renderResponse(type, raiting, genre, provider)
fimalgoritmo
