#include <stdio.h>

void main() {
    char title[101];
    int type, raiting, genre, streaming;
    // [RAITING]    => (1 filme, 2 série, 3 documentário)
    // [GENRE]      => (0 livre, 10 10+, 18 18+)
    // [STREAMING]  => (1 Netflix, 2 Amazon Prime, 3 Disney+, 4 HBO Max)

    printf(" +----------------------------------------------------+-------------------+---------+-----------+------------------+\n");
    printf("<| Título                                             | Tipo              | Censura | Categoria | Fornecedor       |>\n");
    printf(" +----------------------------------------------------+-------------------+---------+-----------+------------------+\n");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Vingadores: Ultimato", "1", "18", "1", "1 (Netflix)");
    printf("<| %-51s | %-17s | %-7s | %-9s | %-16s |>\n", "O Rei Leão", "1", "0", "1", "3 (Disney+)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Breaking Bad", "2", "18", "2", "1 (Netflix)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Friends", "2", "10", "2", "2 (Amazon Prime)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Stranger Things", "2", "10", "1", "1 (Netflix)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Titanic", "1", "10", "3", "2 (Amazon Prime)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Chernobyl", "2", "18", "4", "4 (HBO Max)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "La Casa de Papel", "2", "18", "1", "1 (Netflix)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "O Menino que Descobriu o Vento", "1", "0", "3", "3 (Disney+)");
    printf("<| %-50s | %-17s | %-7s | %-9s | %-16s |>\n", "Dark", "2", "18", "1", "1 (Netflix)");
    printf(" +----------------------------------------------------+-------------------+---------+-----------+------------------+\n\n\n");


    printf("  ## Bem-vindo a escolha de Filmes e Séries!\n");


    printf(" +-----------------------------------------------------------------------+\n");
    printf("<| Tipo de título (1 - Filme, 2 - Série, 3 - Documentário):              |>\n");
    printf(" +-----------------------------------------------------------------------+\n");
    scanf("%d", &type);

    if (!(type == 1 || type == 2 || type == 3)) {
        printf("[VALIDATION ERROR]\nOps! Valor inválido\n[VALID VALUES] <1, 2, 3>");
        return ;
    }

    printf(" +-----------------------------------------------------------------------+\n");
    printf("<| Censura (0 - Livre, 10 - 10 anos ou mais, 18 - 18 anos ou mais):      |>\n");
    printf(" +-----------------------------------------------------------------------+\n");
    scanf("%d", &raiting);

    if (!(raiting == 0 || raiting == 10 || raiting == 18)) {
        printf("[VALIDATION ERROR]\nOps! Valor inválido\n[VALID VALUES] <0, 10, 18>");
        return ;
    }

    printf(" +-----------------------------------------------------------------------+\n");
    printf("<| Categoria (1 - Ação, 2 - Comédia, 3 - Drama, 4 - Suspense):           |>\n");
    printf(" +-----------------------------------------------------------------------+\n");
    scanf("%d", &genre);

    if (!(genre == 1 || genre == 2 || genre == 3 || genre == 4)) {
        printf("[VALIDATION ERROR]\nOps! Valor inválido\n[VALID VALUES] <1, 2, 3, 4>");
        return ;
    }

    printf(" +-----------------------------------------------------------------------+\n");
    printf("<| Fornecedor (1 - Netflix, 2 - Amazon Prime, 3 - Disney+, 4 - HBO Max): |>\n");
    printf(" +-----------------------------------------------------------------------+\n");
    scanf("%d", &streaming);

    if (!(streaming == 1 || streaming == 2 || streaming == 3 || streaming == 4)) {
        printf("[VALIDATION ERROR]\nOps! Valor inválido\n[VALID VALUES] <1, 2, 3, 4>");
        return ;
    }

    
    if(type == 1) {
        if (genre == 1) {
            if (streaming == 1) {
                if (raiting == 18) {
                    // "Vingadores: Ultimato", "1", "18", "1", "1 (Netflix)"
                } else {
                    availabilityError();
                }
            } else if (streaming == 3) {
                // "O Rei Leão", "1", "0", "1", "3 (Disney+)"
            } else {
                availabilityError();
            }
        } else if (genre == 3) {
            if (streaming == 2) {
                if (raiting == 10 || raiting == 18) {
                    // "Titanic", "1", "10", "3", "2 (Amazon Prime)"
                } else {
                    availabilityError();
                }
            } else if (streaming == 3) {
                // "O Menino que Descobriu o Vento", "1", "0", "3", "3 (Disney+)"
            } else {
                availabilityError();
            }
        } else {
            availabilityError();
        }
    } else if (type == 2) {
        if (genre == 1) {
            if (streaming == 1) {
                if (raiting == 18) {
                    // "Stranger Things", "2", "10", "1", "1 (Netflix)"
                    // "La Casa de Papel", "2", "18", "1", "1 (Netflix)"
                    // "Dark", "2", "18", "1", "1 (Netflix)"
                } else if (raiting == 10) {
                    // "Stranger Things", "2", "10", "1", "1 (Netflix)"
                } else {
                    availabilityError();
                }
            } else {
                availabilityError();
            }
        } else if (genre == 2) {
            if (streaming == 1) {
                if (raiting == 18) {
                    // "Breaking Bad", "2", "18", "2", "1 (Netflix)"
                } else {
                    availabilityError();
                }
            } else if (streaming == 2) {
                if (raiting == 10 || raiting == 18) {
                    // "Friends", "2", "10", "2", "2 (Amazon Prime)"
                } else {
                    availabilityError();
                }
            }
        } else if (genre == 4) {
            if(streaming == 4 && raiting == 18) {
                // "Chernobyl", "2", "18", "4", "4 (HBO Max)"
            } else {
                availabilityError();
            }
        } else {
            availabilityError();
        }
    } else {
        availabilityError();
    }
}

void availabilityError() {
    printf("[AVAILABILITY ERROR]\nOps! Nenhuma opção disponível\n[NEXT CATALOG] 20/02/2002 - 20:02:20");
}
