#include "acai.hpp"

Acai::Acai(int tam, std::vector<std::string> &comp, int qtd)
{
    tamanho = tam;
    std::vector<std::string> complementos = comp;
    _quantidade = qtd;
}

float Acai::calcPreco()
{
    return (0.02 * tamanho + 2 * complementos.size()) * _quantidade;
}

std::string Acai::descricao() const
{
    std::string str = "";
    str = std::to_string(_quantidade) + "X açai " + std::to_string(tamanho) += "ml com ";

    int i = 0;

    for (std::string c : complementos)
    {

        if (i != 0)
        {
            str += ", ";
            str += c;
        }
        else
        {
            str += c;
            i++;
        }
    }
    str += ".";
}

/**
 * @brief Retorna uma descricao detalhada do açaí.
 * Exemplo: 2X açai 700ml com leite em pó, granola.
 *
 * @return std::string Descricao detalhada do açai
 */
