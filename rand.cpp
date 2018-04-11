#include <cstdlib>

void randomEvent();

void randomEvent(){
  srand(time());

  if(15 > (rand() % 100) ){//approx 15% chance of an event happening
    switch (rand() % 6) {
      case 0:
        //lost food
        cout<<"During your travels, it looks like you've lost track of some of your food! Must have hit one of the hard frost heaves or a large hole in the road and it just fell out. Too late now them Coyotes must have got to it. You can always pick up more at the store or bag a nice looking Moose out there in the woods.\n";
        int shitLuck = ((rand() % 5) + 1);
        food -= shitLuck;
        cout<<"You lost "<<shitLuck<<" pounds of food!\n";
        cin.ignore();
        return;
      case 1:
        //robbed
        cout<<"PUT THEM UP! Look out he's holding a lobster to you, you might as well give him the money he wants. Them pinchers on that lobster will hurt if they get you. \n";
        int shitLuck = (rand() % (money / 2) + 1);
        money -= shitLuck;
        cout<<"You lost "<<shitLuck<<" dollars!\n";
        cin.ignore();
        return;
      case 2:
        //lost ammo
        cout<<"Oh no what happened to that box of ammo it's all soggy. Someone must have left it out in the rain and now the shells are soaked and ruined. That's a bummer! Should pick up some more at the store next time you are around. \n";
        int shitLuck = (rand() % (ammo / 4) + 1);
        ammo =- shitLuck;
        cout<<"You lost "<<shitLuck<<" rounds of ammo!\n";
        cin.ignore();
        return;
      case 3:
        //Lost hunting/fishing license
        cout<<"Game Warden has stopped you and asked for your license. No Problem, you bought one but where did you put that thing again? Seems as though you lost it! Well, that's no good, thats's a 75$ fine to the State and your gonna need to buy another one so there is a total of 200$ big ones down the drain. \n";
        money -= 275;
        cin.ignore();
        return;
      case 4:
        //roadkill
        cout<<"Oh baby someone hit a dear and left it! That's good eating right there pick that deer up for dinner tonight!\n";
        shitLuck = (rand() % 200) + 1;
        cout<<"You scavenged"<<shitLuck<<" pounds of meat from that roadkill!\n";
        food += shitLuck;
        cin.ignore();
        return;
      case 5:
        //random money floating around
        cout<<"There is something floating in the wind over! looks kinda like a pamphlet? No, wait that's Money! Grab that, seems to be your lucky day.\n";
        shitLuck = (rand() % 75) + 51;
        cout<<"You caught "<<shitLuck<<"dollars\n";
        money += shitLuck;
        cin.ignore();
        return;
      default:
        return;
    } /* switch */
  } /* if */
} /* void randomEvent */
