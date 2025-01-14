#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: leg
//  action 1: the leg cramps
leg.cramps();
//  action 2: the leg moves
leg.moves();
//  action 3: the leg hurts strong
leg.hurtsStrong();
//  2)
//  Noun: phone
//  action 1: the phone rings
phone.rings();
//  action 2: the phone falls
phone.falls();
//  action 3: the phone drains so fast
phone.drainsSoFast();
//  3)
//  Noun: tree
//  action 1: the tree blooms
tree.blooms();
//  action 2: the tree grows
tree.grows();
//  action 3: the tree drys out 
tree.drysOut();
//  4) 
//  Noun: horse
//  action 1: the horse eats gras
horse.eatsGras();
//  action 2: the horse looses fur
horse.loosesFur();
//  action 3: the horse digests the gras
horse.digestsTheGras();
//  5)
//  Noun: dog
//  action 1: the dog barks
dog.barks();
//  action 2: the dog sleeps
dog.sleeps();
//  action 3: the dog catches the stick
dog.catchesTheStick();
//  6)
//  Noun: waterTap
//  action 1: the waterTap breaks
waterTap.breaks();
//  action 2: the waterTap leaks
waterTap.leaks();
//  action 3: the waterTap fills the sink
waterTap.fillsTheSink();
//  7)
//  Noun: torchFire
//  action 1: the torchFire ignites hay
torchFire.ignitesHay();
//  action 2: the torchFire replaces the candle
torchFire.replacesCandle();
//  action 3: the torchFire lights the night
torchFire.lightsNight();
//  8)
//  Noun: lightning
//  action 1: the lightning strikes
lightning.strikes();
//  action 2: the lightning makes thunder
lightning.makesThunder();
//  action 3: the lightning inflames tree
lightning.inflamesTree();
//  9)
//  Noun: cat
//  action 1: the cat meaows
cat.meaows();
//  action 2: the cat purrs
cat.purrs();
//  action 3: the cat hunts mice
cat.huntsMice();
//  10)
//  Noun: child
//  action 1: the child eats
child.eats();
//  action 2: the child crys
child.crys();
//  action 3: the child grows older
child.growsOlder();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
