#ifndef MINUNIT_H
#define MINUNIT_H

#include <stdio.h>

#define mu_assert(test, message) do { \
    if (!(test)) { printf("Erro: %s\n", message); return -1; } \
} while (0)

#define MU_TEST_SUITE_START int mu_run_tests() {
#define MU_TEST_SUITE_END return 0; }

#define MU_RUN_TEST(test) do { \
    if (test() != 0) return -1; \
} while (0)

#define MU_RUN_SUITE(suite) do { \
    if (suite() != 0) return -1; \
} while (0)

#define MU_REPORT() printf("Todos os testes passaram!\n");

#endif