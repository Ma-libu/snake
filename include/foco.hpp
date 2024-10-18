class Foco
{
    private:
    public:
    bool encendido;
     Foco() {}
    ~Foco(){}
    void Encender()
    {
        this->encendido = true;
    
        }
    void Apagar()
    {
       this->encendido = false;
    }

};
