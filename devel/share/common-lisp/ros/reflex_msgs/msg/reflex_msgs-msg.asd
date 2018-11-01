
(cl:in-package :asdf)

(defsystem "reflex_msgs-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "Command" :depends-on ("_package_Command"))
    (:file "_package_Command" :depends-on ("_package"))
    (:file "Finger" :depends-on ("_package_Finger"))
    (:file "_package_Finger" :depends-on ("_package"))
    (:file "FingerPressure" :depends-on ("_package_FingerPressure"))
    (:file "_package_FingerPressure" :depends-on ("_package"))
    (:file "ForceCommand" :depends-on ("_package_ForceCommand"))
    (:file "_package_ForceCommand" :depends-on ("_package"))
    (:file "Hand" :depends-on ("_package_Hand"))
    (:file "_package_Hand" :depends-on ("_package"))
    (:file "Motor" :depends-on ("_package_Motor"))
    (:file "_package_Motor" :depends-on ("_package"))
    (:file "PoseCommand" :depends-on ("_package_PoseCommand"))
    (:file "_package_PoseCommand" :depends-on ("_package"))
    (:file "RadianServoCommands" :depends-on ("_package_RadianServoCommands"))
    (:file "_package_RadianServoCommands" :depends-on ("_package"))
    (:file "RawServoCommands" :depends-on ("_package_RawServoCommands"))
    (:file "_package_RawServoCommands" :depends-on ("_package"))
    (:file "VelocityCommand" :depends-on ("_package_VelocityCommand"))
    (:file "_package_VelocityCommand" :depends-on ("_package"))
  ))