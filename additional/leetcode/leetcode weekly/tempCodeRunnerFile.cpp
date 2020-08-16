  for(auto i=0;i<v.size();i++){

        if(int(v[i])>int(v[i+1]) && int(v[i])-int(v[i+1])==32){
     
        auto it=find(v.begin(),v.end(),v[i]);
        auto it2=find(v.begin(),v.end(),v[i+1]);
      
            v.erase(it);
        
            v.erase(it+1);
           
            
           
        }
        
       
    }

   for(auto i=0;i<v.size();i++){

        if(int(v[i])<int(v[i+1]) && int(v[i+1])-int(v[i])==32){
     
        auto it=find(v.begin(),v.end(),v[i]);
        auto it2=find(v.begin(),v.end(),v[i+1]);
      
            v.erase(it);
        
            v.erase(it+1);
           
            
           
        }
        
       
    }