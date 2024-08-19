# Git及Github学习笔记
- 创建Git  
在文件夹里打开git命令窗口  
git init  
git config user.name "您的 GitHub 昵称"  
git config user.email "您的 GitHub 邮箱"  
git remote add origin 您的Github地址  
git pull origin master  
需要先修改仓库设置 `Settings` - `Actions` - `General` - `Read and write permissions` - `Save`  
git add .  
git commit -m "新功能"  
git push origin HEAD -u  
git tag v1.0.0  
git push origin v1.0.0  

- Git常用命令  
检查文件状态： git status  
从现有仓库创建： gitclone   
 移除文件 ：git rm   
 删除暂存区的文件：git rm-f     
比较文件修改的差异：
git diff  
移动文件或者重命名文件：
git mv origin_filename rename_filename  
查看提交历史：
git log  
回退到以前的版本：
git reset –hard  版本号  

- 分支命令  
查看分支：
git branch  
创建分支：
git branch 分支名  
切换分支：
git checkout  分支名  
创建+切换分支：
git checkout -b  分支名  
合并某分支到当前分支：
git merge  分支名  
git merge --no -ff 分支名  
删除分支：
git branch -d  分支名  





