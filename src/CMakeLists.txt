
cmake_minimum_required(VERSION 2.8)
find_package(OpenCV REQUIRED)
find_package(Boost REQUIRED COMPONENTS system thread)

#add_executable(cv_a1 cv_a1.cpp Target.cpp TargetDetector.cpp VideoDevice.cpp)
#target_link_libraries(cv_a1 ${OpenCV_LIBS})

#add_executable(cv_a2 cv_a2.cpp TargetDetector.cpp Target.cpp TargetProcessor.cpp VideoDevice.cpp)
#target_link_libraries(cv_a2 ${OpenCV_LIBS})

#add_executable(cv_b cv_b.cpp NetworkController.cpp AppConfig.cpp CmdLineInterface.cpp GUIManager.cpp)
#target_link_libraries(cv_b ${OpenCV_LIBS} ${Boost_LIBRARIES})

#add_executable(cv-net cv_b.cpp NetworkController.cpp)
#target_link_libraries(cv-net ${OpenCV_LIBS} ${Boost_LIBRARIES})

add_executable(cv-2017 main.cpp Target.cpp TargetDetector.cpp TargetProcessor.cpp NetworkController.cpp VideoDevice.cpp GUIManager.cpp CmdLineInterface.cpp AppConfig.cpp)
target_link_libraries(cv-2017 ${OpenCV_LIBS} ${Boost_LIBRARIES})

#add_executable(stupid stupid.cpp TargetDetector.cpp)
#target_link_libraries(stupid ${OpenCV_LIBS})
