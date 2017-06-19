class Trajectory {
private:
  std::vector<TrajectorySegment *> segments;
  std::string drone_id;

  double filterAndConvertTime(double t) const;
  TrajectorySegment* getRightSegment (double t) const;

public:
  double min_time, max_time;

  bool loadXML(std::string dorne_ns, char * document);
  void cleanAll();

  DronePose evaluateNED(double t) const;
  DronePose evaluateENU(double t) const;
  DronePose operator[] (double t) const; //Default return ENU

  DronePose evaluateVelNED(double t) const;
  DronePose evaluateVelENU(double t) const;
};
