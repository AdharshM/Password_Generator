echo "Welcome to password generator" 
echo "please enter the length of the password : "  
read passlen  
echo "Ten passwords are generated below, you may choose any of these"
for i in $(seq 1 10);                                    
do  
    openssl rand -base64 48 | cut -c1-$passlen
done 
