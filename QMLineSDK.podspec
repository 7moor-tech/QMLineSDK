

Pod::Spec.new do |spec|


  spec.name         = "QMLineSDK"
  spec.version      = "3.2.5"
  spec.summary      = "QMLineSDK is sdk"

  spec.homepage     = "https://github.com/7moor-tech/QMLineSDK"

  spec.license      = { :type => "MIT", :file => "LICENSE" }

  spec.author             = { "焦林生" => "18515384635@163.com" }


  spec.platform     = :ios

  spec.ios.deployment_target = "9.0"

  spec.source       = { :git => "https://github.com/7moor-tech/QMLineSDK.git", :tag => spec.version }

  spec.source_files  = "QMLineSDK.framework/Headers", "*.{h,m}"

  spec.vendored_frameworks = "QMLineSDK.framework"


  # ――― Project Settings ――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #

  spec.requires_arc = true

  spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  spec.dependency 'Qiniu', '~> 7.2.5'
  spec.dependency 'FMDB', '~> 2.7.5'
  spec.dependency 'SocketRocket', '~> 0.5.1'

end
