#include "invoice.h"

float Invoice::getInvoiceAmount()
{
    return preco * qtd;
}