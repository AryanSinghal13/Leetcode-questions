class ParkingSystem {
public:
    int a,b,c;
    ParkingSystem(int big, int medium, int small) {
        a=big,b=medium,c=small;
    }
    
    bool addCar(int carType) {
        if(a>0&&carType==1){ a--;return 1;}
        if(b>0&&carType==2){ b--;return 1;}
        if(c>0&&carType==3){ c--;return 1;}
        return 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */