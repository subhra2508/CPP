class Player{
	friend void display_palyer(Player &p);
	std::string name;
	int health;
	int xp;
public:
	void display_player(Player&p){
		std::cout<<p.name<<std::endl;
		std::cout<<p.health<<std::endl;
		std::cout<<p.xp<<std::endl;
	}
	...
};


//another example
class Player{
	friend class Other_class;
	std::string name;
	int health;
	int xp;
public:
	...
};