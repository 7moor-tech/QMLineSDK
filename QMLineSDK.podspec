

Pod::Spec.new do |spec|


  spec.name         = "QMLineSDK"
  spec.version      = "4.10.7"
  spec.summary      = "QMLineSDK is sdk"

  spec.homepage     = "https://github.com/7moor-tech/QMLineSDK"

  spec.license      = "MIT"

  spec.author       = { "RockALins" => "rockcodealin@163.com" }

  spec.platform     = :ios,'12.0'

  spec.source       = { :git => "https://github.com/7moor-tech/QMLineSDK.git", :tag => spec.version.to_s }

  spec.resource      = 'QMLineBundle.bundle'
  spec.vendored_frameworks  = "QMLineSDK.framework"
  spec.pod_target_xcconfig = {'VALID_ARCHS'=>'armv7 x86_64 arm64'}

  spec.requires_arc = true
  spec.dependency 'QMBaseLib', '~> 0.9.7'
  spec.dependency 'SocketRocket', '~> 0.6.1'

end
