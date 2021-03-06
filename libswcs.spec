Summary: 	swcs developement library
Name: 		libswcs-devel
Version: 	0.2.1
Release: 	0%{?dist}
License: 	LGPL
Source: 	libswcs-%{version}.tar.gz
Group:		Developement/Libraries
BuildRoot: 	%{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)
BuildRequires:	cmake gcc-c++

%description
swcs: swallow charset library.

%prep
%setup -q -n libswcs-%{version}

%build
cmake -D SKIP_RELINK_RPATH=ON . -DCMAKE_INSTALL_PREFIX=/usr -DCFLAGS="${CFLAGS}" -DCXXFLAGS="${CXXFLAGS}"
make %{?_smp_mflags}

%install
rm -rf %{buildroot}
mkdir %{buildroot}
make DESTDIR=%{buildroot} install

%clean
rm -rf %{buildroot}

%files
%defattr(-,root,root,-)
%{_includedir}/swcs
%{_libdir}/libswcs.a

%changelog
* Wed Mar 27 2013 Alexander Pankov <pianist@usrsrc.ru> - 0.2.1
+ token at the end of line

* Tue Mar 26 2013 Alexander Pankov <pianist@usrsrc.ru> - 0.2.0
+ tokenization

* Mon Mar 17 2013 Alexander Pankov <pianist@usrsrc.ru> - 0.1.0
+ First RPM package

