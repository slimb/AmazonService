Pod::Spec.new do |spec|
  spec.name         = 'AmazonService'
  spec.license      = 'MIT'
  spec.homepage     = 'https://github.com/slimb/AmazonService.git'
  spec.authors      = { 'BN' => 'tonymillion@gmail.com' }
  spec.summary      = 'An Objective-C client for the was service'
  spec.source       = { :git => 'https://github.com/slimb/AmazonService.git', :tag => '0.1.0' }
  spec.source_files = 'AmazonService/*.{h,m}'
end