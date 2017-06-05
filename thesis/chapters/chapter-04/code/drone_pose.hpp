class DronePose {
 private:
   double x, y, z, yaw;
 public:
   DronePose();
   DronePose(double x, double y, double z, double yaw);
   DronePose(const DronePose &dp);
   ~DronePose();

   double getX() const;
   double getY() const;
   double getZ() const;
   double getYaw() const;
   void setX(double x);
   void setY(double y);
   void setZ(double z);
   void setYaw(double yaw);

   double module() const;
   DronePose& operator= (const DronePose &dp); //Assignment
   DronePose operator+ (const DronePose &dp) const; //Sum
   DronePose& operator+= (const DronePose &dp);
   DronePose operator- (const DronePose &dp) const; //Difference
   DronePose& operator-= (const DronePose &dp);
   DronePose operator- () const; //Unary minus
   double operator* (const DronePose &dp) const; //Scalar product
   DronePose operator* (double scal) const; //Product with constant
   DronePose& operator*= (double scal);
   DronePose operator/ (double scal) const; //Ratio with constant
   DronePose& operator/= (double scal);
 };
