; Auto-generated. Do not edit!


(cl:in-package autopilot_bridge-srv)


;//! \htmlinclude ParamSet-request.msg.html

(cl:defclass <ParamSet-request> (roslisp-msg-protocol:ros-message)
  ((name
    :reader name
    :initarg :name
    :type cl:string
    :initform "")
   (value
    :reader value
    :initarg :value
    :type cl:float
    :initform 0.0))
)

(cl:defclass ParamSet-request (<ParamSet-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ParamSet-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ParamSet-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autopilot_bridge-srv:<ParamSet-request> is deprecated: use autopilot_bridge-srv:ParamSet-request instead.")))

(cl:ensure-generic-function 'name-val :lambda-list '(m))
(cl:defmethod name-val ((m <ParamSet-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autopilot_bridge-srv:name-val is deprecated.  Use autopilot_bridge-srv:name instead.")
  (name m))

(cl:ensure-generic-function 'value-val :lambda-list '(m))
(cl:defmethod value-val ((m <ParamSet-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autopilot_bridge-srv:value-val is deprecated.  Use autopilot_bridge-srv:value instead.")
  (value m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ParamSet-request>) ostream)
  "Serializes a message object of type '<ParamSet-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'name))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'name))
  (cl:let ((bits (roslisp-utils:encode-double-float-bits (cl:slot-value msg 'value))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 32) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 40) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 48) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 56) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ParamSet-request>) istream)
  "Deserializes a message object of type '<ParamSet-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'name) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'name) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 32) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 40) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 48) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 56) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'value) (roslisp-utils:decode-double-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ParamSet-request>)))
  "Returns string type for a service object of type '<ParamSet-request>"
  "autopilot_bridge/ParamSetRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ParamSet-request)))
  "Returns string type for a service object of type 'ParamSet-request"
  "autopilot_bridge/ParamSetRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ParamSet-request>)))
  "Returns md5sum for a message object of type '<ParamSet-request>"
  "762cb7cc4dabef610b8749b068c8bb92")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ParamSet-request)))
  "Returns md5sum for a message object of type 'ParamSet-request"
  "762cb7cc4dabef610b8749b068c8bb92")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ParamSet-request>)))
  "Returns full string definition for message of type '<ParamSet-request>"
  (cl:format cl:nil "string name~%float64 value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ParamSet-request)))
  "Returns full string definition for message of type 'ParamSet-request"
  (cl:format cl:nil "string name~%float64 value~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ParamSet-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'name))
     8
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ParamSet-request>))
  "Converts a ROS message object to a list"
  (cl:list 'ParamSet-request
    (cl:cons ':name (name msg))
    (cl:cons ':value (value msg))
))
;//! \htmlinclude ParamSet-response.msg.html

(cl:defclass <ParamSet-response> (roslisp-msg-protocol:ros-message)
  ((ok
    :reader ok
    :initarg :ok
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass ParamSet-response (<ParamSet-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <ParamSet-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'ParamSet-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name autopilot_bridge-srv:<ParamSet-response> is deprecated: use autopilot_bridge-srv:ParamSet-response instead.")))

(cl:ensure-generic-function 'ok-val :lambda-list '(m))
(cl:defmethod ok-val ((m <ParamSet-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader autopilot_bridge-srv:ok-val is deprecated.  Use autopilot_bridge-srv:ok instead.")
  (ok m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <ParamSet-response>) ostream)
  "Serializes a message object of type '<ParamSet-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'ok) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <ParamSet-response>) istream)
  "Deserializes a message object of type '<ParamSet-response>"
    (cl:setf (cl:slot-value msg 'ok) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<ParamSet-response>)))
  "Returns string type for a service object of type '<ParamSet-response>"
  "autopilot_bridge/ParamSetResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ParamSet-response)))
  "Returns string type for a service object of type 'ParamSet-response"
  "autopilot_bridge/ParamSetResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<ParamSet-response>)))
  "Returns md5sum for a message object of type '<ParamSet-response>"
  "762cb7cc4dabef610b8749b068c8bb92")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'ParamSet-response)))
  "Returns md5sum for a message object of type 'ParamSet-response"
  "762cb7cc4dabef610b8749b068c8bb92")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<ParamSet-response>)))
  "Returns full string definition for message of type '<ParamSet-response>"
  (cl:format cl:nil "bool ok~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'ParamSet-response)))
  "Returns full string definition for message of type 'ParamSet-response"
  (cl:format cl:nil "bool ok~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <ParamSet-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <ParamSet-response>))
  "Converts a ROS message object to a list"
  (cl:list 'ParamSet-response
    (cl:cons ':ok (ok msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'ParamSet)))
  'ParamSet-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'ParamSet)))
  'ParamSet-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'ParamSet)))
  "Returns string type for a service object of type '<ParamSet>"
  "autopilot_bridge/ParamSet")