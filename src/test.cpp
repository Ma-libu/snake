#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    auto can = Canvas(300,50);
    

can.DrawPointLine(10, 20, 30, 20); 
can.DrawPointLine(10, 20, 10, 35);
can.DrawPointLine(30, 20, 30, 35); 
can.DrawPointLine(10, 35, 30, 35); 

can.DrawPointLine(10, 20, 20, 10); 
can.DrawPointLine(30, 20, 20, 10); 


can.DrawPointLine(17, 35, 17, 30); 
can.DrawPointLine(23, 35, 23, 30); 
can.DrawPointLine(17, 30, 23, 30); 


can.DrawPointLine(12, 25, 15, 25); 
can.DrawPointLine(12, 28, 15, 28); 
can.DrawPointLine(12, 25, 12, 28); 
can.DrawPointLine(15, 25, 15, 28); 

 
can.DrawPointLine(25, 25, 28, 25); 
can.DrawPointLine(25, 28, 28, 28); 
can.DrawPointLine(25, 25, 25, 28); 
can.DrawPointLine(28, 25, 28, 28); 




    while (true)
    {
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
     
        Element lienzo = bgcolor(Color::Blue,canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(0.1s);
        frame++;
    }

    return 0;
}