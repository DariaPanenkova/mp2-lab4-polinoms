#include <gtest.h>
#include "polinom.h"
#include "monom.h"
// тесты мономов и полиномов

TEST(POLINOM, can_creat_polinom)
{
	ASSERT_NO_THROW(Polinom p);
}