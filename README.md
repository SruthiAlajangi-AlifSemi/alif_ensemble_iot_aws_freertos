# FreeRTOS AWS Reference Integrations

## Cloning

This repo uses [Git Submodules](https://git-scm.com/book/en/v2/Git-Tools-Submodules)  to bring in dependent components.

Note: If you download the ZIP file provided by GitHub UI, you will not get the contents of the submodules.
(The ZIP file is also not a valid git repository).

**To clone using HTTPS:**

```git clone https://github.com/SruthiAlajangiAlifSemi/alif_ensemble_iot_aws_freertos.git --recurse-submodules```

**Using SSH:**

```git clone git@github.com:SruthiAlajangi-AlifSemi/alif_ensemble_iot_aws_freertos.git```

If you have downloaded the repo without using the --recurse-submodules argument, you need to run:

```git submodule update --init --recursive```

## Getting started with Alif ensemble-devkit 

### Set up your development environment
1.Install arm DEVELOPMENT STUDIO IDE.

2.The installer for ARM DS IDE can be downloaded from [Arm Development Studio Downloads](https://developer.arm.com/downloads/-/arm-development-studio-downloads) by registering to ARM.  

3.After installation when ARMDS is launched for the first time, it will prompt for license. Please set license file or floating license server as per license available.  

4.30 day free evaluation license can be requested [here](https://developer.arm.com/downloads/-/arm-development-studio-evaluation).

5.License can be updated later by going into ARM  **Help** menu -> **Arm License Manager**.

### Build and run the FreeRTOS demo project
**Import the FreeRTOS demo into the arm development studio**

1.Open the arm developement studio IDE.

2.From the **File** menu, choose **Import**. Expand **Git**, choose **Projects from Git**, click on **Next**, choose **Existing local repository**, click on **Next**, then choose your cloned repository,click on **Next**, choose **Import existing Eclipse projects**, click on **Next**, choose **aws_demos** directory, click on **Finish** to import project into arm development studio.

3.From the **Project** menu, choose **Build Project**. Confirm the project compiles without any errors.

## Configuring and executing demo application:

### Aws IoT Core setup required:

1.Create AWS account by using [Set up your AWS account](https://docs.aws.amazon.com/iot/latest/developerguide/setting-up.html).

2.Register your device in AWS IoT Core by creating a thing and attaching a policy to it.  Follow **Register your MCU board with AWS IoT** section in [First Steps](https://docs.aws.amazon.com/freertos/latest/userguide/freertos-prereqs.html). Download certificate and privatekey of the device.

### Device setup required to run demo application on board.

1.Below entries should be filled in **aws_cleintcredential.h** which can be found in /demos/include directory of the repo.
   
   **.clientcredentialMQTT_BROKER_ENDPOINT**
   
   Endpoint can be found in the [AWS IoT Console](https://signin.aws.amazon.com/signin?redirect_uri=https%3A%2F%2Fconsole.aws.amazon.com%2Fiot%2Fhome%3Fstate%3DhashArgs%2523%26isauthcode%3Dtrue&client_id=arn%3Aaws%3Aiam%3A%3A015428540659%3Auser%2Ficebreaker&forceMobileApp=0&code_challenge=pWR6MA6JtT0mTQcVzf8051-iP0UVl-pVYCYJtgosZWQ&code_challenge_method=SHA-256) , near the bottom of the navigation pane, choose **Settings**. In this page, in the **Device data endpoint** section, locate the **Endpoint** value and copy it.
   
  **.clientcredentialIOT_THING_NAME** - enter the name of thing created here.
  
 2.Below entries should be filled in **aws_clientcredential_keys.h** file which can be found in demos/include directory.
 
  **keyCLIENT_CERTIFICATE_PEM**, **keyCLIENT_PRIVATE_KEY_PEM** .
 
 3.To enable specific demo application, uncomment demo specific macro in **aws_demo_config.h** which can be found in vendors/alif/boards/ensemble-devkit/aws_demos/config_files directory.
 
 4.Build the project by choosing **Build Project** from **Project** menu.
 
 ### Monitoring MQTT messages on the cloud 
 
 **To subscribe to the MQTT topic with the AWS IoT MQTT client**
 
 1.Sign in to the [AWS IoT Console](https://signin.aws.amazon.com/signin?redirect_uri=https%3A%2F%2Fconsole.aws.amazon.com%2Fiot%2Fhome%3Fstate%3DhashArgs%2523%26isauthcode%3Dtrue&client_id=arn%3Aaws%3Aiam%3A%3A015428540659%3Auser%2Ficebreaker&forceMobileApp=0&code_challenge=pWR6MA6JtT0mTQcVzf8051-iP0UVl-pVYCYJtgosZWQ&code_challenge_method=SHA-256).
 
 2.In the navigation pane, choose **Test**, then choose **MQTT test client** to open the MQTT client.
 
 3.In **Subscription topic**, enter *your-thing-name/example/topic*, and then choose **Subscribe to topic**.
 
 
 
 
 


