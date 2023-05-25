-----------------------for google cloud engine Terminal -------------------
curl https://sdk.cloud.google.com | bash
gcloud init

Google Cnsole se
Open Google Cloud Cnsole
search for App Egnine
follow given steps


------------------------Apex Class Salesforce---------------------------- 
Login to Salesforce
go to setting , setting me click on developer console 
New Window Opens
Click New->Apex Class

public class class_name {
    public static void sum(){
        System.debug('Hello World');
    }
	
}
go to Debug->Open execute anonymous window(ya press ctrl+E)

window open honga
class_name.method_name();
Open Log checkbox ko click 
then execute






-----------------------------cc mini project saas---------------------------
check docker --version if present don't install otherwise
1)install docker
https://www.simplilearn.com/tutorials/docker-tutorial/how-to-install-docker-on-ubuntu


2) Assign user-ship
-sudo groupadd docker
-sudo usermod -aG docker dypcoe


## log out of system and then log in

- su -s dypcoe
- if password is asked then enter dypcoe(might face Authentication Failure) but continue
- docker run hello world(to check if docker is running)

3) run own cloud
docker run --rm --name oc-eval -d -p8080:8080 owncloud/server

4) go to https://localhost:8080/

5)user_name - admin
password - admin


-----------------amazon ec2--------------
https://appinventiv.com/blog/steps-to-launch-aws-ec2-instance/

