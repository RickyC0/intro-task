# PubSub ROS2 Project – Setup Guide

## Dependencies
- ROS 2 Humble 
- Ubuntu Jammy
- colcon
- Python 3

## Setup & Run Instructions

1. **Source ROS 2:**
   ```bash
   source /opt/ros/humble/setup.bash
   ```

2. **Clone the repository:**
   ```bash
   git clone <repo_url>
   ```

3. **Build the workspace:**
   ```bash
   cd intro-task
   colcon build
   ```

4. **Source the workspace:**
   ```bash
   source install/setup.bash
   ```

5. **Run the nodes:**
   - In **Terminal 1**:
     ```bash
     ros2 run cpp_pubsub publisher
     ```
   - In **Terminal 2**:
     ```bash
     ros2 run cpp_pubsub subscriber
     ```

6. **(Optional) Debugging & Info:**
   - List active nodes:
     ```bash
     ros2 node list
     ```

> ⚠️ Ensure ROS 2 is sourced in every terminal session before running commands.
