#include<iostream>
#include<map>
#include<string>
#include<chrono>
#include<thread>
#include<unistd.h>
#include<./../include/weather.hh>

namespace std_2{
      std::map<std::string, int> Forecast_Map = {
        {"jabalpur", 18},
        {"katni", 22},
        {"sagar", 23}
    };
}



int main(){
    wether forecast;
    
 

    std::thread background_worker(forecast.Refresh_Forecast,std_2::Forecast_Map);

    
}