#pragma once

#include <string>
#include "astnode.hpp"

class Variable : public ASTNode
{
public:
    Variable(std ::string name) : ASTNode(name), name_(name) {}

    std ::string value() const { return name_; }

    ~Variable()
    {
        // std::cout << "variable destr";
    }

private:
    std ::string name_;
};
