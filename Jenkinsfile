pipeline {
    agent any

    stages {

        stage('Checkout') {
            steps {
                checkout scm
            }
        }

        stage('Configure') {
            steps {
                sh '''
                    cmake -S . -B build
                '''
            }
        }

        stage('Build') {
            steps {
                sh '''
                    cmake --build build
                '''
            }
        }

        stage('Test') {
            steps {
                sh '''
                    cd build
                    ctest --output-on-failure
                '''
            }
        }

        stage('Run Program') {
            steps {
                sh '''
                    ./build/odd_even 10
                    ./build/odd_even 7
                '''
            }
        }
    }

    post {
        success {
            echo 'Project built successfully!'
        }

        failure {
            echo 'Build failed.'
        }
    }
}