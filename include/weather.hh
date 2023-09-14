#include<iostream>
#include<map>
#include<string>
#include<chrono>
#include<thread>
#include<unistd.h>


class wether{
   public:
   void Refresh_Forecast(std::map<std::string, int> Forecast_Map){
   while(true){
       for(auto data:Forecast_Map){
          data.second++;
          std::cout<<data.first<<" "<<data.second<<std::endl;
       }
       std::this_thread::sleep_for(2000ms);
   }
}
};



