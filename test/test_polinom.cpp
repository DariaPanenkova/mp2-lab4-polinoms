#include <gtest.h>
#include "polinom.h"
#include "monom.h"
// ����� ������� � ���������

TEST(POLINOM, can_creat_polinom)
{
	ASSERT_NO_THROW(Polinom p);
}