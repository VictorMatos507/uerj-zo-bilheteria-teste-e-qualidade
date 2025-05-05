#include <stdio.h>
#include "minunit.h"

float calcularPreco(int idade, int quantidade);

MU_TEST(test_crianca) {
    mu_assert(calcularPreco(10, 2) == 20.0, "Erro no cálculo para criança.");
}

MU_TEST(test_adulto) {
    mu_assert(calcularPreco(25, 3) == 90.0, "Erro no cálculo para adulto.");
}

MU_TEST(test_idoso) {
    mu_assert(calcularPreco(65, 1) == 15.0, "Erro no cálculo para idoso.");
}

MU_TEST(test_limite_excedido) {
    mu_assert(calcularPreco(30, 6) == -1, "Erro ao verificar limite de bilhetes.");
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_crianca);
    MU_RUN_TEST(test_adulto);
    MU_RUN_TEST(test_idoso);
    MU_RUN_TEST(test_limite_excedido);
}

int main() {
    MU_RUN_SUITE(test_suite);
    MU_REPORT();
    return 0;
}