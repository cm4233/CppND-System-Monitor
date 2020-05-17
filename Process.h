#pragma once
#include <string>
#include "ProcessParser.h"

using namespace std;
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
    private:
        string pid;
        string user;
        string cmd;
        string cpu;
        string mem;
        string upTime;
    public:
        Process(string pid){
            this->pid = pid;
            this->user = ProcessParser::getProcUser(pid);
            //TODOs:
            //complete for mem
            this->mem = ProcessParser::ProcessParser::getVmSize(pid);
            //complete for cmd
            this->cmd = ProcessParser::getCmd(pid);
            //complete for upTime
            this->upTime = ProcessParser::getProcUpTime(pid);
            //complete for cpu
            this->cpu  = ProcessParser::getCpuPercent(pid);
        }
        void setPid(int pid);
        string getPid()const;
        string getUser()const;
        string getCmd()const;
        int getCpu()const;
        int getMem()const;
        string getUpTime()const;
        string getProcess();
};
