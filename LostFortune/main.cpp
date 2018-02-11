// Lost Fortune

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
	const unsigned int GOLD_PIECES = 1500;
	int partySize, partyLosses;
	string playerName;

	cout << "###################################################################" << endl;
	cout << "#                                                                 #" << endl;
	cout << "#                           Lost Fortune                          #" << endl;
	cout << "#                                                                 #" << endl;
	cout << "###################################################################" << endl;
	
	cout << "\n\nWelcome to Lost Fortune, the personalised adventure generation game" << endl;
	
	cout << "To begin the adventure please enter the following:" << endl;
	cout << "Enter a number: ";
	cin >> partySize;
	cout << "\nEnter a number smaller than the previous number: ";
	cin >> partyLosses;
	cout << "\nPlease enter a name: ";
	cin >> playerName;

	int partyAlive = partySize - partyLosses;
	int share = GOLD_PIECES / partyAlive;
	int leftovers = GOLD_PIECES % partyAlive;

	cout << "\n\nThe adventure begins here\n" << endl;
	cout << "###################################################################\n" << endl;

	cout << "A brave group of " << partySize << " set out upon a quest. It would take them" << endl;
	cout << "far beyond the lands of the kingdom they had come to call home. The" << endl;
	cout << "party's quest was one attempted by many that came before them, yet" << endl;
	cout << "no one had succeeded, for their quest was to claim a treasure that" << endl;
	cout << "would make them rich beyond their wildest dreams, or so the legends" << endl;
	cout << "of " << playerName << "'s treasure told.\n" << endl;

	cout << "PRESS ENTER TO CONTINUE";
	cin.ignore();
	cin.ignore();

	cout << "\nAs the brave warriors ventured across the lands, they crossed" << endl;
	cout << "deserts and river rapids alike, their journey lasting for weeks as" << endl;
	cout << "they battled onwards. That was, until they reached their" << endl;
	cout << "destination. It was a cave, carved into the side of a mountain that" << endl;
	cout << "overlooked the treacherous land the party had found themselves in.\n" << endl;

	cout << "PRESS ENTER TO CONTINUE";
	cin.ignore();

	cout << "\nAs the party entered the cave, they were confronted by the beast" << endl;
	cout << "that guarded the treasure. A beast so foul that none who had come" << endl;
	cout << "before them had been able to defeat it. But this time, it was the" << endl;
	cout << "beast who lost its life, but not before it could claim the lives of" << endl;
	cout << partyLosses << " of the brave warriors who fought against it.\n" << endl;

	cout << "PRESS ENTER TO CONTINUE";
	cin.ignore();

	cout << "\nAfter the beast was slain and the treasure claimed, the remaining" << endl;
	cout << partyAlive << " split the " << GOLD_PIECES << " gold pieces between themselves, leaving" << endl;
	cout << "them each with " << share << " whilst their leader pocketed the remaining" << endl;
	cout << leftovers << " gold pieces to keep things fair amongst the others.\n\n" << endl;

	cout << "###################################################################" << endl;
	cout << "#                                                                 #" << endl;
	cout << "#                        The  End                                 #" << endl;
	cout << "#                                                                 #" << endl;
	cout << "###################################################################\n\n" << endl;

	return 0;
}