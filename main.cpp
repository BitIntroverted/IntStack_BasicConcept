/*
 * 	Name: Lukas Friedrich
 * 	Coding 03
 * 	Testing push(), pop(), isEmpty(), and peek() from Stack ADT
 */

#include "main.h"

int main(int argc, char** argv)
    {
        const int TESTCOUNT = 100000;
        Stack ragDoll;

        //Generate a random num from 1-4 each loop and run a correlating method from the stack class
        for(int i = 0; i < TESTCOUNT; i++)
            {
                int randMethodID = (std::rand() % 4) + 1;
                //push = 1
                if(randMethodID == 1)
                    {
                        bool overFlow = ragDoll.push(std::rand());
                        if (overFlow == false)
                        {
                            std::cout << "Stack overflow, cannot push" << std::endl;
                        }
                    }
                //pop = 2
                else if(randMethodID == 2)
                    {
                        try
                        {
                            ragDoll.pop();
                        }
                        catch(int errorNum)
                        {
                            if(errorNum == 0)
                            {
                                std::cout << "Stack underflow, cannot pop" << std::endl;
                            }
                            else
                            {
                                std::cout << "unkown error" << std::endl;
                            }
                        }
                    }
                //isEmpty = 3
                else if(randMethodID == 3)
                    {
                        std::cout << "Stack empty: " << ragDoll.isEmpty() << std::endl;
                    }
                //peek = 4
                else if(randMethodID == 4)
                    {
                        try
                        {
                            std::cout << ragDoll.peek() << std::endl;
                        }
                        catch(int errorNum)
                        {
                            if(errorNum == 0)
                            {
                                std::cout << "Stack underflow, cannot peek" << std::endl;
                            }
                            else
                            {
                                std::cout << "unkown error" << std::endl;
                            }
                        }
                    }
                
            }

        return 0;
    }