class GammaParameter {
private:
  std::string owner;
  double gamma;
  double acquisition_time; //In seconds
  std::mutex mtx;
  static double expiration_interval; //In seconds

public:
  GammaParameter();
  GammaParameter(const GammaParameter& gp);
  GammaParameter(std::string owner,
                 double gamma,
                 double acquisition_time);
  ~GammaParameter();

  static void setExpirationInterval(double expiration_interval);
  static double getExpirationInterval();
  GammaParameter& setOwner(std::string owner);
  GammaParameter& setGamma(double gamma, double acquisition_time);
  GammaParameter& setData(std::string owner,
                          double gamma,
                          double acquisition_time);
  std::string getOwner();
  double getGamma();
  bool isExpired();
  GammaParameter& getData(std::string *owner_ptr,
                          double * gamma_ptr,
                          bool * exp_ptr);
  GammaParameter& operator= (const GammaParameter &gp);
};
