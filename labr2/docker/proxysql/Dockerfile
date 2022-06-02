FROM proxysql/proxysql
#:2.3.2_arm64

# Update packages
RUN apt-get update -y --fix-missing

# Install common packages
RUN apt-get install -y default-mysql-client

# Set custom config
ADD proxysql.cnf /etc/
