FROM ros:dashing

RUN git clone https://github.com/nstanley/ros2docker
#RUN cd ros2docker/pkg_alpha
#RUN colcon build --symlink-install
#RUN cd ros2docker/pkg_one
#RUN colcon build --symlink-install