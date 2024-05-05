#include <iostream>
#include <math.h>
#include <list>

using namespace std;

int main(){
    cout << "**************************Calculadora de sueño**********************\n";
    string week[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo",};
    int days = week->length() + 1;
    int sleepTime[days];
    int totalSleepHours = 0;
    int idealSleepHours = 56;

    for (int i = 0; i <= days; i++){
        cout << "Ingrese las horas de sueños del " << week[i] << endl;
        cin >> sleepTime[i];
        totalSleepHours += sleepTime[i];
    }
    cout << "Desglose de la semana: \n";
    for(int i = 0; i <= days; i++){
        cout << "Los " << week[i] << ": " << sleepTime[i] << "\n";
    }

    int prompt = idealSleepHours - totalSleepHours; 

    if(totalSleepHours == idealSleepHours)
    {
        cout << "Haz dormido las horas necesarias a la semana\n";
    } else if(totalSleepHours > idealSleepHours){
        
        cout << "Tienes " << abs(prompt) << " horas por encima de lo recomendado de sueno\n";
    } else if (totalSleepHours < idealSleepHours)
    {
        cout << "Faltaron " << prompt << " horas de sueño para lograr la meta de la semana.\n";
    }

    cout << "-------------------------------------------------------------------\n";
    cout << "Total: " << totalSleepHours << " horas " <<endl;

    
}