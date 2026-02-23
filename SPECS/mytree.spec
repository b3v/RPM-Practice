Name:           mytree
Version:        0.0.1
Release:        1%{?dist}
Summary:        A simple script to traverse through file tree

License:        GPL
Source0:        %{name}-%{version}.tar.gz

BuildRequires:  gcc

%description


%prep
%autosetup


%build
gcc $CFLAGS mytree.c -o mytree

%install
mkdir -p %{buildroot}/usr/bin
install -m 0755 mytree %{buildroot}/usr/bin/mytree

%files
/usr/bin/tree



%changelog
* Sat Feb 21 2026 Super User
- 
