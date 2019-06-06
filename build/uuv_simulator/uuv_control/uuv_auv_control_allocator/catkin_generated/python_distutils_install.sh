#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/ubuntu/workspace/clearpath_ros/src/uuv_simulator/uuv_control/uuv_auv_control_allocator"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/ubuntu/workspace/clearpath_ros/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/ubuntu/workspace/clearpath_ros/install/lib/python2.7/dist-packages:/home/ubuntu/workspace/clearpath_ros/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/ubuntu/workspace/clearpath_ros/build" \
    "/usr/bin/python2" \
    "/home/ubuntu/workspace/clearpath_ros/src/uuv_simulator/uuv_control/uuv_auv_control_allocator/setup.py" \
    build --build-base "/home/ubuntu/workspace/clearpath_ros/build/uuv_simulator/uuv_control/uuv_auv_control_allocator" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/ubuntu/workspace/clearpath_ros/install" --install-scripts="/home/ubuntu/workspace/clearpath_ros/install/bin"
