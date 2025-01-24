// Figura 12.7: BasePlusCommissionEmployee.h
// Definição da classe BasePlusCommissionEmployee representa um empregado
// que recebe um salário-base além da comissão.

#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // classe string padrão C++
using std::string;

class BasePlusCommissionEmployee
{
public:
    // Construtor
    BasePlusCommissionEmployee(const string &, const string &,
                               const string &, double = 0.0, double = 0.0, double = 0.0);

    // Métodos de acesso e modificação para nome
    void setFirstName(const string &);
    string getFirstName() const;

    // Métodos de acesso e modificação para sobrenome
    void setLastName(const string &);
    string getLastName() const;

    // Métodos de acesso e modificação para SSN
    void setSocialSecurityNumber(const string &);
    string getSocialSecurityNumber() const;

    // Métodos de acesso e modificação para vendas brutas
    void setGrossSales(double);
    double getGrossSales() const;

    // Métodos de acesso e modificação para taxa de comissão
    void setCommissionRate(double);
    double getCommissionRate() const;

    // Métodos de acesso e modificação para salário-base
    void setBaseSalary(double);
    double getBaseSalary() const;

    // Calcula os rendimentos do empregado
    double earnings() const;

    // Imprime as informações do empregado
    void print() const;

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double grossSales; // vendas brutas semanais
    double commissionRate; // porcentagem da comissão
    double baseSalary; // salário-base
};

#endif // BASEPLUS_H
