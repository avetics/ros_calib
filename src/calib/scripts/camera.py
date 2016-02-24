#!/usr/bin/env python
# license removed for brevity
import rospy
from sensor_msgs.msg import CameraInfo

def talker():
    pub = rospy.Publisher('camera_info', CameraInfo, queue_size=10)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(10) # 10hz
    while not rospy.is_shutdown():
        data = CameraInfo()
        #[[ 820.29938083    0.          408.73210359]
 	#[   0.          827.01247867  237.04151422]
	#[   0.            0.            1.        ]]
        data.K = (820,0.,408.73210359,0.,827.01247867,827.01247867,0.,0.,1.)
        pub.publish(data)
        rate.sleep()

if __name__ == '__main__':
    try:
        talker()
    except rospy.ROSInterruptException:
        pass
