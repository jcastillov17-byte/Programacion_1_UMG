#ifndef CURSO_H
#define CURSO_H
#include <string>
#include <vector>

class Curso
{
    public:
        Curso();
        Curso(std::string nombreCurso, std::string codigoCurso, std::string preRequisitoDeCurso, bool estadoCurso);
        //Getters
        std::string getnombreCurso();
        std::string getpreRequisitoDeCurso();
        std::string getcodigoCurso();
        bool getestadoCurso();
        //Setters
        void setestadoCurso(bool estadoCurso);
        void setcodigoCurso(std::string codigoCurso);
        void  setnombreCurso(std::string nombreCurso);
        void setpreRequisitoDeCurso(std::string preRequisitoDeCurso);
        //Metodos
        std::vector<Curso> catalagoCursosIngSistemas();
        void menuCurso();
        void insertarCurso();
        void desplegarCurso();
        void modificarCurso();
        void buscarCurso();
        void borrarCurso();

    protected:

    private:
        std::string nombreCurso;
        std::string preRequisitoDeCurso;
        std::string codigoCurso;
        bool estadoCurso;

};

#endif // CURSO_H
