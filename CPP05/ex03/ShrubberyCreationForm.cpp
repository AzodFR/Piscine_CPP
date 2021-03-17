#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <sstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &name) : Form("Shruberry", 145, 137) , _target(name){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj): Form("Shruberry", 145, 137) , _target(obj.getTarget()){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->isSigned())
    {
        if (executor.getGrade() > getCanExec())
            throw GradeTooLowException();
        std::ofstream out_file(_target + "_shrubbery");
        out_file <<
"                                                         ." << std::endl << 
"                                              .         ;  " << std::endl <<
"                 .              .              ;%     ;;   " << std::endl <<
"                   ,           ,                :;%  %;   " << std::endl <<
"                    :         ;                   :;%;'     .,   " << std::endl <<
"           ,.        %;     %;            ;        %;'    ,;" << std::endl <<
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
"              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl <<
"               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
"                    `:%;.  :;bd%;          %;@%;'" << std::endl <<
"                      `@%:.  :;%.         ;@@%;'   " << std::endl <<
"                        `@%.  `;@%.      ;@@%;   "       << std::endl <<
"                          `@%%. `@%%    ;@@%;  "       << std::endl <<
"                            ;@%. :@%%  %@@%;       " << std::endl <<
"                              %@bd%%%bd%%:;     " << std::endl <<
"                                #@%%%%%:;;" << std::endl <<
"                                %@@%%%::;" << std::endl <<
"                                %@@@%(o);  . '  "       << std::endl << 
"                                %@@@o%;:(.,'     "     << std::endl <<
"                            `.. %@@@o%::;        "  << std::endl <<
"                               `)@@@o%::;        "  << std::endl <<
"                                %@@(o)::;        " << std::endl <<
"                               .%@@@@%::;        "  << std::endl <<
"                               ;%@@@@%::;.        "   << std::endl <<
"                              ;%@@@@%%:;;;. " << std::endl <<
"                          ...;%@@@@@%%:;;;;,..   " << std::endl;

       
        
    }
    else
        throw NotSignedFormException();
}