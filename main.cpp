#include <iostream>
using namespace std;

class Player{
  
public:
 int CurrentHealth;
 int AttackPower;
 int HealingPower;

 int takeHeal(int heal)
{
   CurrentHealth += heal;
   return CurrentHealth;
}
int GetHeal(int heal){
  return heal;
}
};
 
class Tank : public Player{

public:

Tank(int Health,int atkpower,int healpower)
{
  CurrentHealth = Health;
  AttackPower = atkpower;
  HealingPower = healpower;
}
int takeDamage(int damage)
{
CurrentHealth -= damage;
return CurrentHealth;
}
int Getdamage(int damage)
{
  return damage;
}
int additionalDamage()
{
  srand(time(NULL));
  int d = rand()%10+1;
  CurrentHealth -= d;
  return CurrentHealth;
}

int SetCurrentHealth()
{
  return CurrentHealth;
}
int SetAttackPower()
{
return AttackPower;
}
int SetHealingPower(){
 return HealingPower;
}
};

class Fighter : public Player{

public:
Fighter(int Health,int atkpower,int healpower)
{
CurrentHealth = Health;
AttackPower = atkpower;
HealingPower = healpower;
}

int takeDamage(int damage)
{
CurrentHealth -= damage;
return CurrentHealth;
}

int Getdamage(int damage)
{
  return damage;
}

int additionalDamage()
{
  srand(time(NULL));
  int d = rand()%10+1;
  CurrentHealth -= d;
  return CurrentHealth;
}

 int takeHeal(int heal){
   CurrentHealth += heal;
   return CurrentHealth;
 }

int GetHeal(int heal)
{
  return heal;
}

int SetCurrentHealth()
{
  return CurrentHealth;
}

int SetAttackPower()
{
return AttackPower;
}

int SetHealingPower()
{
 return HealingPower;
}
};

class Mage : public Player{

public:

Mage(int Health,int atkpower,int healpower)
{
  CurrentHealth = Health;
  AttackPower = atkpower;
  HealingPower = healpower;
}

int takeDamage(int damage)
{
CurrentHealth -= damage;
return CurrentHealth;
}
int Getdamage(int damage)
{
  return damage;
}

int additionalDamage()
{
  srand(time(NULL));
  int d; 
  d = rand()%10+1;
  CurrentHealth -= d;
  return CurrentHealth;
}

int takeHeal(int heal)
{
  CurrentHealth += heal;
  return CurrentHealth;
}
int GetHeal(int heal)
{
  return heal;
}

int SetCurrentHealth()
{
  return CurrentHealth;
}
int SetAttackPower()
{
return AttackPower;
}
int SetHealingPower()
{
 return HealingPower;
}
};
int main() 
{
  Tank tank(120,10,10);
  Fighter fighter(100,20,20);
  Mage mage(80,30,20);

  int turn = 0;
  bool replay = true;
  cout << "\033[2J\033[0;0H";
  int Player,Player1,Player2;
  cout<<"Welcome to the 2 player battle game!!! "<<endl;
  cout<<"Choose One -\n1.Rules\n2.Start Game"<<endl;
  cin>>Player;
  if(Player == 1)
   {
     while(replay){
     cout << "\033[2J\033[0;0H";
     cout<<"The Game will be Between Two Players\nThe Players has to choose from 3 classes i.e.\n->Tank\n->Fighter\n->Mage\n\n1.Start Game\n\nPress 1  Know About the Roles or Press 2 To Start the Game\n";
     cin>>Player;
     
      if(Player == 1)
      {
        cout << "\033[2J\033[0;0H";
        cout<<"Stats For Tank -\nMaxHealth = 120\nMaxDefence = 30\nAttack Power = 10\nHealing Power = Random(1 to 10)\n\n";

        cout<<"Stats For Fighter -\nMaxHealth = 100\nMaxDefence = 20\nAttack Power = 20\nHealing Power = Random(1 to 20)\n\n";

        cout<<"Stats For Mage -\nMaxHealth = 80\nMaxDefence = 10\nAttack Power = 30\nHealing Power = Random(1 to 20)\n\n";

        cout<<"Press 1 to go back";
        cin>>Player;
        if(Player == 1){
          replay = true;
        }else{
          cout<<"\nPlease Choose 1 only";
          replay = true;
        }
      }
     }  
    }
    cout << "\033[2J\033[0;0H";
    if(Player == 2)
    while(replay)
      {
        cout << "\033[2J\033[0;0H";
        cout<<"Player 1 , Choose a Class - \n1.Tank\n2.Fighter\n3.Mage\n\n";
        cin>>Player1;
        switch (Player1)
        {
          case 1:
          cout<<"You Have Choosen Tank Class \nBelow Are Your Stats \n\n";
          cout<<"MaxHealth = "<<tank.SetCurrentHealth()<<endl;
          cout<<"Attack Power = "<<tank.SetAttackPower()<<endl;
          cout<<"Healing Power = "<<tank.SetHealingPower()<<endl;
          break;

          case 2:
          cout<<"You Have Choosen Fighter Class \nBelow Are Your Stats \n\n";
          cout<<"MaxHealth = "<<fighter.SetCurrentHealth()<<endl;
          cout<<"Attack Power = "<<fighter.SetAttackPower()<<endl;
          cout<<"Healing Power = "<<fighter.SetHealingPower()<<endl;
          break;

          case 3:
          cout<<"You Have Choosen Mage Class \nBelow Are Your Stats \n\n";
          cout<<"MaxHealth = "<<mage.SetCurrentHealth()<<endl;
          cout<<"Attack Power = "<<mage.SetAttackPower()<<endl; 
          cout<<"Healing Power = "<<mage.SetHealingPower()<<endl;
          break;
        }
        cout<<"\n\nPlayer 2 , Choose a Class - \n1.Tank\n2.Fighter\n3.Mage\n\n";
        cin>>Player2;
        switch (Player2)
        {
          case 1:
          cout<<"You Have Choosen Tank Class \nBelow Are Your Stats \n\n";
          cout<<"MaxHealth = "<<tank.SetCurrentHealth()<<endl;
          cout<<"Attack Power = "<<tank.SetAttackPower()<<endl;
          cout<<"Healing Power = "<<tank.SetHealingPower()<<endl;
          break;

          case 2:
          cout<<"You Have Choosen Fighter Class \nBelow Are Your Stats \n\n";
          cout<<"MaxHealth = "<<fighter.SetCurrentHealth()<<endl;
          cout<<"Attack Power = "<<fighter.SetAttackPower()<<endl; 
          cout<<"Healing Power = "<<fighter.SetHealingPower()<<endl;
          break;

          case 3:
          cout<<"You Have Choosen Mage Class \nBelow Are Your Stats \n\n";
          cout<<"MaxHealth = "<<mage.SetCurrentHealth()<<endl;
          cout<<"Attack Power = "<<mage.SetAttackPower()<<endl;
          cout<<"Healing Power = "<<mage.SetHealingPower()<<endl;
          break;
        }
        if      (Player1 == 1 && Player2 == 2){
          cout << "\033[2J\033[0;0H";
          do{
            if(turn == 0)
            {
                int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Healing Spell ✨ 🧙‍♂            	    *" << endl;
                if(tank.CurrentHealth <= 60){
                cout << "* 3.  Rage Attack 🧪                    *\n";
                }
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                switch(option)
                {
                    case 1:
                    turn = 1;
                    cout<<"Tank(Player 1) Attacked Fighter (Player 2) and dealt "<<tank.Getdamage(10)<<" point of Damage\n";
                    fighter.takeDamage(10);
                    cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                    cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                    break;

                    case 2:
                     turn = 1;
                     tank.takeHeal(10);
                     cout<<"Tank(Player 1) Used Healing Spell and recovered "<<tank.GetHeal(10)<<" points of HP\n";
                     cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                     break;

                    case 3:
                      turn = 1;
                      fighter.takeDamage(10);
                      fighter.additionalDamage();
                      cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                      cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                      break;

                    default:
                    cout << "Invalid option, please select a valid option " << endl;
				        }
            }
            else if(turn == 1)
             {
                int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Healing Spell ✨ 🧙‍♂            	    *" << endl;
                if(fighter.CurrentHealth <= 50){
                cout << "* 3.  Rage Attack 🧪                    *\n";
                }
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                switch(option)
                {
                  case 1:
                  turn = 0;
                  cout<<"Fighter(Player 2) Attacked Tank(Player 1) and dealt "<<tank.Getdamage(20);
                  tank.takeDamage(20);
                  cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                  break;

                 case 2:
                  turn = 0;
                  fighter.takeHeal(20);
                  cout<<"Fighter(Player 2) Used Healing Spell and recovered "<<fighter.GetHeal(20)<<" points of HP\n";
                  cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                  break;

                  case 3:
                    turn = 0;
                    fighter.takeDamage(10);
                    fighter.additionalDamage();
                    cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                    cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                    cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                    break;

                 default:
                  cout << "Invalid option, please select a valid option " << endl;

				        }
               }
             }
           while(fighter.CurrentHealth>0 && tank.CurrentHealth>0);
           replay = false;
           if(fighter.CurrentHealth <= 0)
           {
             cout<<"Player 1 Wins\n";
           }else if(tank.CurrentHealth <= 0){
             cout<<"Player 2 Wins\n";
           }
        }else if(Player1 == 1 && Player2 == 3){
           do{
            if(turn == 0)
            {
              int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Healing Spell ✨ 🧙‍♂            	    *" << endl;
                if(tank.CurrentHealth <= 60){
                cout << "* 3.  Rage Attack 🧪                    *" << endl;}
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                switch(option)
                {
                    case 1:
                    turn = 1;
                    cout<<"Tank(Player 1) Attacked Mage(Player 2) and dealt "<<tank.Getdamage(10)<<" points of Damage";
                    mage.takeDamage(10);
                    cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                    cout<<"Player 2 health is : "<<mage.SetCurrentHealth()<<endl;
                    break;

                    case 2:
                     turn = 1;
                     tank.takeHeal(10);
                     cout<<"Tank(Player 1) Used Healing Spell and recovered "<<tank.GetHeal(10)<< " points of HP\n";
                     cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<mage.SetCurrentHealth()<<endl;
                     break;

                    case 3:
                      turn = 1;
                      fighter.takeDamage(10);
                      fighter.additionalDamage();
                      cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                      cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                      cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                      break;

                    default:
                    cout << "Invalid option, please select a valid option " << endl;
				        }
            }
            else if(turn == 1)
             {
                int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Healing Spell ✨ 🧙‍♂            	    *" << endl;
                if(mage.CurrentHealth <= 45){
                cout << "* 3.  Rage Attack 🧪                    *" << endl;
                }
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                switch(option)
                {
                  case 1:
                  turn = 0;
                  cout<<"Mage(Player 2) Attacked Tank(Player 1) and dealt "<<mage.Getdamage(30)<<" points of Damage";;
                  tank.takeDamage(30);
                  cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<mage.SetCurrentHealth()<<endl;
                  break;

                 case 2:
                  turn = 0;
                  mage.takeHeal(20);
                  cout<<"Mage(Player 2) Used Healing Spell and recovered "<<tank.GetHeal(10)<< " points of HP\n"; 
                  cout<<"Player 1 Health is :" <<tank.SetCurrentHealth();
                  cout<<"Player 2 health is : "<<mage.SetCurrentHealth()<<endl;
                  break;

                case 3:
                  turn = 1;
                  fighter.takeDamage(10);
                  fighter.additionalDamage();
                  cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                  cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                  break;

                 default:
                  cout << "Invalid option, please select a valid option " << endl;

				        }
               }
             }
           while(mage.CurrentHealth>0 && tank.CurrentHealth>0);
           replay = false;
           if(mage.CurrentHealth <= 0)
           {
             cout<<"Player 1 Wins\n";
           }
           else if(tank.CurrentHealth <= 0)
           {
             cout<<"Player 2 Wins\n";
           }
        }else if(Player1 == 2 && Player2 == 1){
          do{
            if(turn == 0)
            {
              int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Healing Spell ✨ 🧙‍♂            	    *" << endl;
                if(fighter.CurrentHealth <= 50){
                cout << "* 3.  Rage Attack 🧪                    *" << endl;}
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                switch(option)
                {
                  case 1:
                  turn = 1;
                  cout<<"Fighter(Player 1) Attacked Tank(Player 2) and dealt "<<fighter.Getdamage(20)<<" points of Damage";
                  tank.takeDamage(20);
                  cout<<"Player 1 health is : "<<fighter.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<tank.SetCurrentHealth()<<endl;
                  break;

                  case 2:
                  turn = 1;
                  fighter.takeHeal(20);
                  cout<<"Fighter(Player 1) Used Healing Spell and recovered "<<fighter.GetHeal(10)<<" points of HP\n";
                  cout<<"Player 1 health is : "<<fighter.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<tank.SetCurrentHealth()<<endl;
                  break;

                  case 3:
                  turn = 1;
                  fighter.takeDamage(10);
                  fighter.additionalDamage();
                  cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                  cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                  break;

                  default:
                  cout << "Invalid option, please select a valid option " << endl;
				        }
            }
            else if(turn == 1)
             {
                int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Healing Spell ✨ 🧙‍♂            	    *" << endl;
                if(tank.CurrentHealth <= 60){
                cout << "* 3.  Rage Attack 🧪                    *" << endl;}
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                switch(option)
                {
                  case 1:
                  turn = 0;
                  cout<<"Tank(Player 2) Attacked Fighter(Player 1) and dealt "<<tank.Getdamage(10)<<" points of Damage";
                  fighter.takeDamage(10);
                  cout<<"Player 1 health is : "<<fighter.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<tank.SetCurrentHealth()<<endl;
                  break;

                 case 2:
                  turn = 0;
                  tank.takeHeal(10);
                  cout<<"Fighter(Player 2) Used Healing Spell and recovered "<<tank.GetHeal(10)<< " points of HP\n";
                  cout<<"Player 1 health is : "<<fighter.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<tank.SetCurrentHealth()<<endl;
                  break;

                  case 3:
                    turn = 1;
                    fighter.takeDamage(10);
                    fighter.additionalDamage();
                    cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                    cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                    cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                    break;   

                 default:
                  cout << "Invalid option, please select a valid option " << endl;

				        }
               }
             }
           while(fighter.CurrentHealth>0 && tank.CurrentHealth>0);
           replay = false;
           if(tank.CurrentHealth <= 0)
           {
             cout<<"Player 1 Wins\n";
           }else if(fighter.CurrentHealth <= 0){
             cout<<"Player 2 Wins\n";
           }


        }else if(Player1 == 2 && Player2 == 3){
          do{
            if(turn == 0)
            {
              int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Healing Spell ✨ 🧙‍♂            	    *" << endl;
                if(fighter.CurrentHealth <= 50){
                cout << "* 3.  Rage Attack 🧪                    *" << endl;}
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                switch(option)
                {
                    case 1:
                    turn = 1;
                    cout<<"Fighter(Player 1) Attacked Mage(Player 2) and dealt "<<fighter.Getdamage(20)<<" points of Damage";;
                    mage.takeDamage(20);
                    cout<<"Player 1 health is : "<<fighter.SetCurrentHealth()<<endl;
                    cout<<"Player 2 health is : "<<mage.SetCurrentHealth()<<endl;
                    break;

                    case 2:
                     turn = 1;
                     fighter.takeHeal(20);
                     cout<<"Fighter(Player 1) Used Healing Spell and recovered "<<fighter.GetHeal(20)<< " points of HP\n";
                     cout<<"Player 1 health is : "<<fighter.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<mage.SetCurrentHealth()<<endl;
                     break;

                    case 3:
                     turn = 1;
                     fighter.takeDamage(10);
                     fighter.additionalDamage();
                     cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                     cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                     break;

                    default:
                    cout << "Invalid option, please select a valid option " << endl;
				        }
            }
            else if(turn == 1)
             {
                int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Healing Spell ✨ 🧙‍♂            	    *" << endl;
                if(mage.CurrentHealth <= 45){
                cout << "* 3.  Rage Attack 🧪                    *" << endl;}
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                switch(option)
                {
                  case 1:
                  turn = 0;
                  cout<<"Mage(Player 2) Attacked Fighter(Player 1) and dealt "<<mage.Getdamage(30)<<" points of Damage";;
                  fighter.takeDamage(30);
                  cout<<"Player 1 health is : "<<fighter.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<mage.SetCurrentHealth()<<endl;
                  break;

                 case 2:
                  turn = 0;
                  mage.takeHeal(20);
                  cout<<"Mage(Player 2) Used Healing Spell and recovered "<<mage.GetHeal(20)<< " points of HP\n";
                  cout<<"Player 1 health is : "<<fighter.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<mage.SetCurrentHealth()<<endl;
                  break;

                  case 3:
                     turn = 1;
                     fighter.takeDamage(10);
                     fighter.additionalDamage();
                     cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                     cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                     break;    

                 default:
                  cout << "Invalid option, please select a valid option " << endl;

				        }
               }
             }
           while(fighter.CurrentHealth>0 && mage.CurrentHealth>0);
           replay = false;
           if(mage.CurrentHealth <= 0)
           {
             cout<<"Player 1 Wins\n";
           }else if(fighter.CurrentHealth <= 0){
             cout<<"Player 2 Wins\n";
           }

        }else if(Player1 == 3 && Player2 == 1){
          do{
            if(turn == 0)
            {
              int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Healing Spell ✨ 🧙‍♂            	    *" << endl;
                if(mage.CurrentHealth <= 45){
                cout << "* 3.  Rage Attack 🧪                    *" << endl;}
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                switch(option)
                {
                    case 1:
                    turn = 1;
                    cout<<"Mage(Player 1) Attacked Tank(Player 2) and dealt "<<mage.Getdamage(30)<<" points of Damage";;
                    tank.takeDamage(30);
                    cout<<"Player 1 health is : "<<mage.SetCurrentHealth()<<endl;
                    cout<<"Player 2 health is : "<<tank.SetCurrentHealth()<<endl;
                    break;

                    case 2:
                     turn = 1;
                     mage.takeHeal(20);
                     cout<<"Mage(Player 1) Used Healing Spell and recovered "<<mage.GetHeal(20)<< " points of HP\n";
                     cout<<"Player 1 health is : "<<mage.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<tank.SetCurrentHealth()<<endl;
                     break;

                    case 3:
                     turn = 1;
                     fighter.takeDamage(10);
                     fighter.additionalDamage();
                     cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                     cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                     break;

                    default:
                    cout << "Invalid option, please select a valid option " << endl;
				        }
            }
            else if(turn == 1)
             {
                int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Healing Spell ✨ 🧙‍♂            	    *" << endl;
                if(tank.CurrentHealth <= 60){
                cout << "* 3.  Rage Attack 🧪                    *" << endl;}
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                switch(option)
                {
                  case 1:
                  turn = 0;
                  cout<<"Tank(Player 2) Attacked Mage(Player 1) and dealt "<<tank.Getdamage(10)<<" points of Damage";;
                  mage.takeDamage(10);
                  cout<<"Player 1 health is : "<<mage.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<tank.SetCurrentHealth()<<endl;
                  break;

                 case 2:
                  turn = 0;
                  tank.takeHeal(10);
                  cout<<"Tank(Player 2) Used Healing Spell and recovered "<<tank.GetHeal(10)<< " points of HP\n";
                  cout<<"Player 1 health is : "<<mage.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<tank.SetCurrentHealth()<<endl;
                  break;

                 case 3:
                     turn = 1;
                     fighter.takeDamage(10);
                     fighter.additionalDamage();
                     cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                     cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                     break;

                 default:
                  cout << "Invalid option, please select a valid option " << endl;

				        }
               }
             }
           while(tank.CurrentHealth>0 && mage.CurrentHealth>0);
           replay = false;
           if(tank.CurrentHealth <= 0)
           {
             cout<<"Player 1 Wins\n";
           }else if(mage.CurrentHealth <= 0){
             cout<<"Player 2 Wins\n";
           }
        }else if(Player1 == 3 && Player2 == 2){
          do{
            if(turn == 0)
            {
              int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Health Spell ✨ 🧙‍♂            	    *" << endl;
                if(mage.CurrentHealth <= 45){
                cout << "* 3.  Rage Attack 🧪                    *" << endl;}
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                while(replay)
                switch(option)
                {
                    case 1:
                    turn = 1;
                    replay = false;
                    cout<<"Mage(Player 1) Attacked Fighter(Player 2) and dealt "<<mage.Getdamage(30)<<" points of Damage";;
                    fighter.takeDamage(30);
                    cout<<"Player 1 health is : "<<mage.SetCurrentHealth()<<endl;
                    cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                    break;

                    case 2:
                     turn = 1;
                     replay = false;
                     mage.takeHeal(20);
                     cout<<"Mage(Player 1) Used Healing Spell and recovered "<<mage.GetHeal(20)<< " points of HP\n";
                     cout<<"Player 1 health is : "<<mage.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                     break;

                    case 3:
                     turn = 1;
                     replay = false;
                     fighter.takeDamage(10);
                     fighter.additionalDamage();
                     cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                     cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                     break;

                    default:
                     cout << "Invalid option, please select a valid option " << endl;
                     replay = false;
				        }
            }
            else if(turn == 1)
             {
                int option = 0;
                cout << endl;
                cout << "*******************************************" << endl;
                cout << "*              Pick an action:            *" << endl;
                cout << "* 1.  Attack  💫           *" << endl;
                cout << "* 2.  Cast Healing Spell ✨ 🧙‍♂            	    *" << endl;
                if(fighter.CurrentHealth <= 50){
                cout << "* 3.  Rage Attack 🧪                    *" << endl;}
                cout << "*******************************************" << endl;
                cout << "Input:";
                cin >> option;
                cout << endl;
                switch(option)
                {
                  case 1:
                  turn = 0;
                  cout<<"Fighter(Player 2) Attacked Mage(Player 1) and dealt "<<fighter.Getdamage(20)<<" points of Damage";;
                  mage.takeDamage(20);
                  cout<<"Player 1 health is : "<<mage.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                  break;

                 case 2:
                  turn = 0;
                  fighter.takeHeal(20);
                  cout<<"Fighter(Player 2) Used Healing Spell and recovered "<<fighter.GetHeal(20)<< " points of HP\n";
                  cout<<"Player 1 health is : "<<mage.SetCurrentHealth()<<endl;
                  cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                  break;

                  case 3:
                     turn = 1;
                     mage.takeDamage(10);
                     mage.additionalDamage();
                     cout<<"Tank(Player 1) used Rage Attack on Fighter(Player 2) and dealt random points of Critical Damage\n";
                     cout<<"Player 1 health is : "<<tank.SetCurrentHealth()<<endl;
                     cout<<"Player 2 health is : "<<fighter.SetCurrentHealth()<<endl;
                     break;  

                 default:
                  cout << "Invalid option, please select a valid option " << endl;

				        }
               }
             }
           while(fighter.CurrentHealth>0 && mage.CurrentHealth>0);
           replay = false;
           if(fighter.CurrentHealth <= 0)
           {
             cout<<"Player 1 Wins\n";
           }else if(mage.CurrentHealth <= 0){
             cout<<"Player 2 Wins\n";
           }
           
        }
        cin.ignore();
        cout<<"\n\nDo You Want To Play Again?\n";
        cout<<"Input: ";
        cin>>Player;
        if(Player == 1){
          replay = true;
        }
      }
    
}
