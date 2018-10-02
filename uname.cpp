#include<iostream>
#include<string>
#include<ctime>
using namespace std;
const string SYSTEM = "Darvin";  // Linux
string _ninfo = "ishios-MacBook-Pro.local";
string _rinfo = "15.2.0";
string _minfo = "x86_64";
string _oinfo = "GNU/Darvin";
string _ainfo = "Darwin ishios-MacBook-Pro.local 15.2.0 Darwin Kernel Version 15.2.0:";
string _mcspinfo = "root:xnu-3248.20.55~2/RELEASE_X86_64";
int main(int argc ,char* argv[]){
	time_t now = time(0);
	char * dt = ctime(&now);
	if(argc==1 ){
		cout<<SYSTEM<<endl;
	}else{
		string param = argv[1];
		if (param.size()>0){
			if (param=="-s"||param=="--kernel-name"){
				cout<<SYSTEM<<endl;
			}
			else if(param=="-n"||param=="--nodename"){
				cout<<_ninfo<<endl;
			}else if(param=="-r"||param=="--kernel-release"){
				cout<<_rinfo<<endl;
			}else if(param=="-m"|| param=="-p"||param=="-i"||param=="--machine"||param=="--processor"||param=="--hardware-platform"){
				cout<<_minfo<<endl;
			}else if(param=="-o"||param=="--operating-system"){
				cout<<_oinfo<<endl;
			}else if(param=="-a"){
				cout<<_ainfo<<dt<<_mcspinfo<<endl;
			}else if(param=="--help"){
				cout<<"Usage: uname [OPTION] ..."<<endl;
				cout <<"Print certain system information .With no OPTION, same as -s."<<endl;
				cout <<endl;
				cout <<"    -a, --all                            print all information , in the following order,"<<endl;
				cout <<"                                                 except omit -p and -i if unknown:"<<endl;
				cout <<"    -s, --kernel-name              print the kernel name "<<endl;
				cout <<"    -n, --nodename                 print the network node hostname"<<endl;
				cout <<"    -r,  --kernel-release           print the kernel release"<<endl;
				cout <<"    -v,  --kernel-version           print the kernel version"<<endl;
				cout <<"    -m, --machine                    print the mechine hardware name"<<endl;
				cout <<"    -p,  --processor                  print the processor type or \"unknown\""<<endl;
				cout <<"     -i,  --hardware-platform     print  the hardware platform or \"unknown\""<<endl;
				cout <<"     -o, --operating-system       print the operations system"<<endl;
				cout <<"     --help        display this help and exit"<<endl;
				cout <<"     --version    output version information and exit"<<endl;
				cout <<endl;
				cout <<"GNU coreutils online help: <http://www.gnu.org/software/coreutils/>"<<endl;
				cout<<"For complete documentation, run: info coreutils 'uname invocation'"<<endl;
			}else if(param=="--version"){
				cout<<"Copyright (C) 2013 Free Software Foundation, Inc."<<endl;
				cout<<"License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>."<<endl;
				cout<<"This is free software: you are free to change and redistribute it."<<endl;
				cout<<"There is NO WARRANTY, to the extent permitted by law."<<endl;
				cout<<endl;
				cout<<"Written by David MacKenzie."<<endl;
			}else{
				cout<<"uname: invalid option '"<<param<<"'"<<endl<<"Try \'uname --help\' for more infomation."<<endl;
			}
		}
	}
}