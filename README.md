# How to Download File Tree Walker

This repository is used as an exercise to practice the creating and downloading of RPM (Red Hat Package Manager) packages.

First, make sure you have the following tools to edit and use RPMs:
sudo dnf install -y rpmdevtools rpmlint

cd into rpmbuild

Run rpmlint to make sure the .spec file has no issues:
rpmlint ~/rpmbuild/SPECS/mytree.spec

Now build the binary:
rpmbuild -ba ~/rpmbuild/SPECS/hello.spec

On Linux OS's (I used Fedora), run the command:
sudo dnf install RPMS/x86_64/mytree-0.0.1-1.fc42.x86_64.rpm

Now verify that the binary has been installed:
rpm -qi

The binary mytree should now be command-line-executable and should be placed in /usr/bin/
