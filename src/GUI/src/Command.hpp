




class Command
{
public:
  virtual ~Command() {};
  virtual void execute() = 0;
};


class Build_Run_Command : public Command
{
public:
  virtual void execute() 
  { 
    //Build_Command.execute();
    //Run_Command.execute();
  }
};



class Build_Command : public Command
{
public:
  virtual void execute() 
  {  
    //exec g++ or MAKE
  }
};


class Run_Command : public Command
{
public:
  virtual void execute() 
  {  
    //optional: check for chmod +x main
    //exec ./main 
  }
};


