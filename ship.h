class Ship
{
	public:
		Ship();
		~Ship();
		void move(int);
		void movePursue(float, float);
		void turnToPort();
		void turnToStarboard();
		float posX;
		float posY;
		int radius;
		float heading;
		float speed;
		int starshipClass;
};
