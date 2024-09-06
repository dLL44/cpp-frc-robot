#include <frc2/command/SubsystemBase.h>
#include <frc/drive/DifferentialDrive.h>
#include <rev/CANSparkMax.h>
#include <rev/RelativeEncoder.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <Constants.h>

class DrivTrain : public frc2::SubsystemBase {
public:
    // motor controllers
    rev::CANSparkMax m_motorFL{Constants::DRIVE_FL, rev::CANSparkMax::MotorType::kBrushless};
    
}