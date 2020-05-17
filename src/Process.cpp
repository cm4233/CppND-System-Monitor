#include "Process.h"

using namespace std;

void Process::setPid(int pid){
    this->pid = pid;
}
string Process::getPid()const {
    return this->pid;
}
string Process::getProcess(){
    if(!ProcessParser::isPidExisting(this->pid))
        return "";
    this->mem = ProcessParser::getVmSize(this->pid);
    this->upTime = ProcessParser::getProcUpTime(this->pid);
    this->cpu = ProcessParser::getCpuPercent(this->pid);

    return ((this->pid+"      ").substr(0,6) + " "+ 
            (this->user+"          ").substr(0,8) + "    "+ 
            (this->cpu+"     ").substr(0,5)+ "     "+ 
            (this->mem+"     ").substr(0,5)+ "    "+ 
            (this->upTime+"     ").substr(0,5)+ "    "+ 
            this->cmd.substr(0,30)+ "...");
}
